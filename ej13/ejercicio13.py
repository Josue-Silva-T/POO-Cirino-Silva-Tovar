class Articulo:
    def __init__(self, precio, descuento, cantidad, descripcion):
        self.precio = precio
        self.descuento = descuento
        self.cantidad = cantidad 
        self.descripcion = descripcion
    def setPrecio(self, precio):
        if(precio <= 0): return False
        else:
                self.precio = precio
                return True
    def setDescuento(self, descuento):
        if(descuento<0): return False
        else:
                self.descuento = descuento
                return True
    def setCantidad(self, cantidad):
        if(cantidad <= 0): return False
        else:
                self.cantidad = cantidad
                return True
    def setDescripcion(self, descripcion):
        if(len(descripcion)==0): return False
        else: 
                self.descripcion = descripcion
                return True
    def getPrecio(self): return self.precio
    def getDescuento(self): return self.descuento
    def getCantidad(self): return self.cantidad
    def getDescripcion(self): return self.descripcion

articulo1 = Articulo(0,0,0,"")

articulo1.setPrecio(100)
arti = []
print("Introduce el articulo o fin: ")
while True:
    articulo1.setDescripcion(input(">> "))
    arti.append(articulo1.getDescripcion())
    if(articulo1.getDescripcion() == "fin"):
        break
i = 0
while True:
    if(len(arti)-1 <= i):
        break
    print(str(i+1)+ ".-" + str(arti[i]))
    i += 1




    
