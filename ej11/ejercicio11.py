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
articulo1.setDescuento(0)
articulo1.setCantidad(2)
articulo1.setDescripcion("Chocolate premium 100% cacao")

#print("Precio: " + str(articulo1.getPrecio()))
print("Descuento: " + str(articulo1.getDescuento()))
print("Cantidad: " + str(articulo1.getCantidad()))
print("Descripcion: " + articulo1.getDescripcion())
    
