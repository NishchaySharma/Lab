# -*- coding: utf-8 -*-
"""
Created on Thu Jan 31 09:46:10 2019
@author: dit
"""
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
df=pd.read_csv('E:/USA_Housing.csv')
a=df.head(n=10)
print(a)
print(df.info())
print(df.columns)
sns.pairplot(pd)