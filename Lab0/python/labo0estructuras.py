# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
##variables globales
vectortripletas=[]
vectoraminoacidos=[]
########################

def leerarchivo():
    
    import csv #lib de archivos excel
    datos = open("datos.csv")
    reader = csv.reader(datos)
    for columna in reader:
        vectortripletas.append(columna[0])
        vectoraminoacidos.append(columna[1])
    #print (vectortripletas)
    #print(vectoraminoacidos)   
    #estos dos vectores tienen 64 espacios rellenos con la base de datos hecha en el archivo datos.csv
    return

def pedircadena():
    leerarchivo()
    from textwrap import wrap #lib para separar strings
    cadena=input("Ingrese la cadena ARN:     ")
    cantidadtripletas= int(len(cadena)/3) #nos dice el tamano del vector de tripletas a generar
    for i in cadena:
      trip=  wrap(cadena, 3) #esto me almacena tripletas x cada casilla del vector
    #print(trip)
    aminoacidos=""
    for i in range(cantidadtripletas):
        for j in range(64):
            if trip[i]==vectortripletas[j]:
                aminoacidos+=vectoraminoacidos[j]
    print("La cadena de aminoacidos asociada es: ")    
    print(aminoacidos)
    return


pedircadena()

