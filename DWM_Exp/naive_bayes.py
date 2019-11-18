import pandas as pd
import numpy

rain_yes=0
rain_no=0
high_yes=0
high_no=0
weak_yes=0
weak_no=0

data_csv=pd.read_csv("a.csv")
total=len(data_csv)
outlook = list(data_csv["Outlook"])
humidity = list(data_csv["Humidity"])
wind = list(data_csv["Wind"])
play = list(data_csv["Play"])

set_outlook=set(outlook)
set_humidity=set(humidity)
set_wind=set(wind)
set_play=set(play)

print("SETS\n",set_outlook,"\n",set_humidity,"\n",set_wind,"\n",set_play)

number_yes=play.count("yes")
number_no=play.count("no")
print("Total number of tuples are",total)
print("Number of yes are\n",number_yes,"\nNumber of no are\n",number_no)
pyes=round(float(number_yes/total),2)
pno=round(float(number_no/total),2)
print("Probability of yes is\n",pyes)
print("Probability of no is\n",pno)
for i,j in zip(outlook,play):
	if(i=="rain" and j=="yes"):
		rain_yes=rain_yes+1
	if(i=="rain" and j=="no"):
		rain_no=rain_no+1
print("Yes rain",rain_yes)
print("No rain",rain_no)
p_rain_yes=round(float(rain_yes/number_yes),2)
p_rain_no=round(float(rain_no/number_no),2)
for i,j in zip(humidity,play):
	if(i=="high" and j=="yes"):
		high_yes=high_yes+1
	if(i=="high" and j=="no"):
		high_no=high_no+1
p_high_yes=round(float(high_yes/number_yes),2)
p_high_no=round(float(high_no/number_no),2)
for i,j in zip(wind,play):
	if(i=="weak" and j=="yes"):
		weak_yes=weak_yes+1
	if(i=="weak" and j=="no"):
		weak_no=weak_no+1
p_weak_yes=round(float(weak_yes/number_yes),2)
p_weak_no=round(float(weak_no/number_no),2)
yes=round(float(p_weak_yes*p_high_yes*p_rain_yes*pyes),4)
no=round(float(p_weak_no*p_high_no*p_rain_no*pno),4)

print("Probability that he will play",yes)
print("Probability that he will not play",no)
