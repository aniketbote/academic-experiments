from sklearn.datasets import load_iris
import pandas as pd
##data = load_iris()
##data = list(data
##print(data)
url = "https://raw.githubusercontent.com/jbrownlee/Datasets/master/iris.csv"
names = ['sepal-length', 'sepal-width', 'petal-length', 'petal-width', 'class']
dataset = pd.read_csv(url, names=names)

df = pd.DataFrame(dataset)
slen = df['sepal-length']
swid = df['sepal-width']
plen = df['petal-length']
pwid = df['petal-width']


