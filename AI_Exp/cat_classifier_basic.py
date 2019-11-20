import tensorflow as tf
import keras
import cv2
import numpy as np
import matplotlib.pyplot as plt
from sklearn.utils import shuffle
from sklearn.model_selection import train_test_split
import os
from skimage import io

#variables
target_path_n = '../../data/chest_xray/train/NORMAL'
target_path_p = '../../data/chest_xray/train/PNEUMONIA'
train_path = '../../data/chest_xray/train'
classes = ['NORMAL','PNEUMONIA']
train = []
label = []

###dataset loading
for c in classes:
    class_dir = os.path.join(train_path,c)
    for name in os.listdir(class_dir):
        name = os.path.join(class_dir,name)
        im = cv2.imread(name)
        #im = io.imread(name, as_gray=True)
        print(im.shape)
        im = cv2.resize(im,(40,40))
        train.append(im)
        if c == 'PNEUMONIA':
            label.append(1)
        elif c == 'NORMAL':
            label.append(0)
            

            
train = np.asarray(train)
label = np.asarray(label)
X,y = shuffle(train,label,random_state = 1)

np.save('X',X)
np.save('y',y)

X = np.load('X.npy')
y = np.load('y.npy')

#train test split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.33, random_state=42)

#data preprocessing
X_train = X_train / 255.0
X_test = X_test / 255.0


#data visualization
plt.figure(figsize=(10,10))
for i in range(5):
    plt.subplot(5,5,i+1)
    plt.xticks([])
    plt.yticks([])
    plt.grid(False)
    plt.imshow(X_train[i])
    plt.xlabel(classes[y_train[i]])
plt.show()

#model building
model = keras.Sequential([
    keras.layers.Flatten(input_shape=(40, 40)),
    keras.layers.Dense(128, activation='tanh'),
    keras.layers.Dense(2, activation='softmax')
])


model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])

    
#model training
model.fit(X_train, y_train, epochs=5)

model.save('partly_trained_1.h5')

#model evaluation
test_loss, test_acc = model.evaluate(X_test, y_test)


#model prediction
single_test = 'test'
for i in os.listdir(single_test):
    test = []
    print(type(test))
    img_path = os.path.join(single_test,i)
    im = io.imread(img_path, as_gray=True)
    im = cv2.resize(im,(40,40))
    a = im.tolist()
    test.append(a)
    test  = np.asarray(test)
    predictions = model.predict(test)
    p = np.argmax(predictions[0])
    if p==0:
        print('{} is NOT Pneumonia'.format(i))
    else:
        print('{} is Pneumonia'.format(i))
    
    
