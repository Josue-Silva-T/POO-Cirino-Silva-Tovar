class Bicicleta:
    def __init__(self, color, velocidad, marcha):
        self.color = color
        self.velocidad = velocidad
        self.marcha = marcha
    def getColor(self): return self.color
    def getVelocidad(self): return self.velocidad
    def getMarcha(self): return self.marcha

    def setColor(self, color):
        if(len(color) == 0): return False
        else:
            self.color = color
            return True
    def setVelocidad(self, velocidad):
        if(velocidad < 0): return False 
        else:
            self.velocidad = velocidad
            return True
    def setMarcha(self, marcha):
        if(marcha < 0): return False
        else:
            self.marcha = marcha
            return True

Bicicleta = Bicicleta("",0,0)

Bicicleta.setColor("Negro")
Bicicleta.setVelocidad(0)
Bicicleta.setMarcha(2)

print("Color: " + Bicicleta.getColor())
print("Velocidad: " + str(Bicicleta.getVelocidad()))
print("Marcha: "+ str(Bicicleta.getMarcha()))
