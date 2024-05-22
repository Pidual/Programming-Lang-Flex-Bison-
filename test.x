print("-------PRUEBA DECLARACION variable------")#
variable string>gato#
print(string>gato)#

variable string>gato3 = "gaticoo"#
print("gato3")#

variable num1 = 1#
print(num1)#

variable string>hola = "Hola"#
print(string>hola)#

variable v2 = -2#
print (v2)#

variable p3 = 3 + 1#
print (p3)#

variable z5 = num1 - v2#
print (z5)#

variable v6 = 6 * v2#
print (v6)#

variable v7 = z5 / 2#
print (v7)#

print ("-------PRUEBA CONDICIONALES------")#

variable v8 = 9#
chi (v8 < 10) 4 + 10# fin
print (v8)#

variable prueba1 = 11#
chi (prueba1 > 10) prueba1 = 20# fin
print (prueba1)#

variable prueba2 = 11#
chi (prueba2 > 10) prueba2 = 5 + prueba1 # fin
print (prueba2)#

variable prueba3 = 10#
chi (prueba3 >= 10) prueba3 = 20 - prueba2 no prueba3 = 30 + prueba2# fin
print (prueba3)#

print ("-------PRUEBA MIENTRAS------")#

variable v9 = 0#
mientras(v9 < 8) v9 = v9 + 1#
print (v9)#

variable pa1 = 0#
mientras(pa1 <= 8) pa1 = pa1 + 1#
print (pa1)#

print ("-------PRUEBA POR------")#

variable pruebafor1 = 0#
variable i1#
por(i1 = 0# i1 < 40) pruebafor1 = pruebafor1 + 1#
print(pruebafor1)#

variable pruebafor2 = 0#
variable i2#
por(i2 = 0# i2 <= 40) pruebafor2 = pruebafor2 + 1#
print(pruebafor2)#

print ("-------PRUEBA FUNCIONES------")#

funcion suma1() variable a3 = 4 + 1# retorno a3#finFun
print(a3)#

funcion fun0() variable z1 = a3 + 1# retorno z1# finFun
print (z1)#


print ("-------PRUEBA ERRORES------")#

intentar 1/0# atrapar print("No se puede dividir por cero")# fin
intentar# atrapar print (8)# fin