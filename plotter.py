import numpy as np 
import matplotlib.pyplot as plt

#Extrae las diferentes columnas del archivo
float_integer, float_decimal, float_precision = np.loadtxt('data_float.txt', unpack=True)
double_integer, double_decimal, double_precision = np.loadtxt('data_double.txt', unpack=True)

#Grafica 
plt.plot(float_decimal, float_precision, 'bo')
plt.savefig('plot_float.png')

plt.close()
plt.plot(double_decimal, double_precision, 'ro')
plt.savefig('plot_double.png')
