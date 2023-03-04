# -*- coding: utf-8 -*-
"""
Created on Thu Mar 25 13:22:18 2021

@author: arthu
"""

initial=open("code initial.txt","r")
final=open("code final.txt","r")
intermediaire=open("code intermédiaire.txt","r")
instruction=open("instructions-tarer extrusion.txt","r")

init=initial.read()
fin=final.read()
inter=intermediaire.read()
instr=instruction.read()

emplacement="C:/Users/arthu/Documents/3D/kdb/dagoma0.g"


dagoma=open("dagoma0.g","w")  ##crée le fichier bloc note tout seul s'il n'existe paset et écrase le précédent
dagoma=open("dagoma0.g","a") 
dagoma.write("//génération automatique de Gcode\n")
dagoma.write(init+"\n")

n=int(input("combien d'impressions ?"))

for i in range(n):
    dagoma.write(instr+"\n")
    dagoma.write(inter+"\n")

dagoma.write(instr)
dagoma.write(fin)
dagoma.close()