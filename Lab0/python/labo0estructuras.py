# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
## @file labo0estructuras.py
# @brief Version en Python del Laboratorio 0
# @details El objetivo es desempolvar las habilidades de programacion. El programa consiste en recibir una cadena de codonas y retornar la cadena de aminoacidos generada por las codonas.

## \mainpage Laboratorio 0
# Este es el laboratorio 0, cuyo objetivo es desempolvar las habilidades de programacion

## Declaracion de variable vectortripletas: Matriz vacia para llenarlas con las codonas
vectortripletas=[]
## Declaracion de variable vectortripletas: Matriz vacia para llenarlas con los aminoacidos
vectoraminoacidos=[]
########################
## Esta funcion lee un archivo de valores separados por comas en el que se encuentran todas las posibles tripletas de codonas y el aminocido que generan
def leerarchivo():
    ## @package csv
    import csv 
    ## se abre el archivo csv
    datos = open("datos.csv") 
    reader = csv.reader(datos) 
    ## se lee el archivo
    #
    for columna in reader:
        ## se indexan los valores a los vectores de tripletas y de aminoacidos
        #
        vectortripletas.append(columna[0])
        vectoraminoacidos.append(columna[1])
    #print (vectortripletas)
    #print(vectoraminoacidos)   
    ## estos dos vectores tienen 64 espacios rellenos con la base de datos hecha en el archivo datos.csv
    #
    return

## pedircadena: Esta funcion solicita al usuario la cadena de codonas, y luego llama a la funcion @leerarchivo para comparar valores y retornar la cadena de aminoacidos
def pedircadena():
    leerarchivo()
    from textwrap import wrap ## se importa la libreria para separar strings
    cadena=input("Ingrese la cadena ARN:     ") ## se solicita al usuario la cadena de codonas
    cantidadtripletas= int(len(cadena)/3) ## se calcula tamano del vector de tripletas a generar
    #
    for i in cadena:
      trip=  wrap(cadena, 3) ## se almacenan tripletas por cada casilla del vector
      #
    #print(trip)
    ## se inicializa una variable para la cadena de aminoacidos
    aminoacidos=""
    #
    ## se comparan los datos de las tripletas con el csv para luego agregar la proteina generada a la cadena de aminoacidos
    for i in range(cantidadtripletas):
        for j in range(64):
            if trip[i]==vectortripletas[j]:
                aminoacidos+=vectoraminoacidos[j]
    #
    ## se imprime la cadena de aminoacidos
    print("La cadena de aminoacidos asociada es: ")    
    print(aminoacidos)
    #
    return
    #

pedircadena()

