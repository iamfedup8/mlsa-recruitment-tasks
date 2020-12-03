#!/usr/bin/env python
# coding: utf-8

# In[61]:


import pandas as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score
import matplotlib.pyplot as plt
import pickle

# Creating the dataframe and splitting the data
df = pd.read_csv('data.csv')
X = df[['radius_mean','perimeter_mean','area_mean','smoothness_mean']]
y = df['diagnosis']
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3)

# Creating the model and training it
Predictor = DecisionTreeClassifier()
Predictor.fit(X_train, y_train)
predictions = Predictor.predict(X_test)

# Checking the accuracy of the model (1 being best)
accuracy = accuracy_score(y_test, predictions)
accuracy

# Correlation Matrix Plot 
Xcorr = df[['radius_mean','perimeter_mean','area_mean']]
plt.matshow(Xcorr.corr())
plt.colorbar()
plt.show()


Pkl_filename = "task3-model.pkl"

with open(Pkl_filename, 'wb') as file:
    pickle.dump(Predictor, file)
    


# In[ ]:




