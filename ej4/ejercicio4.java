public class Carro{
    private String marca, color, modelo;
    private float peso, velocidad;
    private boolean estado;

    public String getMarca(){return marca;}
    public String getColor(){return color;}
    public String getModelo(){return modelo;}
    public float getPeso(){return peso;}

    public float Acelerar(float velocidad){
	if(estado == true){
	    this.velocidad = velocidad;
	    return velocidad;}else{
	    return 0;}}
    public boolean Encender(boolean estado){
	    this.estado = estado;
	    return estado; }
    public boolean Frenar(boolean estado){
	this.estado = estado;
	return estado;}

    public boolean setMarca(String marca){
	if(marca.trim().isEmpty()){return false;}
	else{
	    this.marca = marca;
	    return true;
	}}
    public boolean setColor(String color){
	if(color.trim().isEmpty()){return false;}
	else{
	    this.color = color;
	    return true;
	}}
    public boolean setModelo(String modelo){
	if(modelo.trim().isEmpty()){return false;}
	else{
	    this.modelo = modelo;
	    return true;
	}}
    public boolean setPeso(int peso){
	if(peso == 0){return false;}
	else{
	    this.peso = peso;
	    return true;
	}}
    public static void main(String[] args){
	Carro vehiculo = new Carro();

	vehiculo.setMarca("Audi");
	vehiculo.setColor("Negro");
	vehiculo.setModelo("Coupé V10 2023");
	vehiculo.setPeso(1655);

	System.out.println("Marca: " + vehiculo.getMarca());
	System.out.println("Color: " + vehiculo.getColor());
	System.out.println("Modelo: "+ vehiculo.getModelo());
	System.out.println("Peso: "  + vehiculo.getPeso()+ "Kg");
	if(vehiculo.Encender(true) == true){System.out.println("Estado: Encendido");}
	else if(vehiculo.Frenar(false) == false){
	System.out.println("Estado: Apagado");
	}
	System.out.println("Aceleracion: " + vehiculo.Acelerar(120)+ "Km");
    }
}

