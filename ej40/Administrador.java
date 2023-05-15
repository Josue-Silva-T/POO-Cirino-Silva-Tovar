public class Administrador extends Empleado {
    private String departamento;
    private double bono;

    public Administrador(String nombre, double salario, String fechaNacimiento, String departamento, double bono) {
        super(nombre, salario, fechaNacimiento);
        this.departamento = departamento;
        this.bono = bono;
    }

    public String getDepartamento() {
        return departamento;
    }

    public double getBono() {
        return bono;
    }
}

public class Main {
    public static void main(String[] args) {

        // Crear un objeto Empleado
        Empleado empleado = new Empleado("John Doe", 2000, "17/09/2004");

        // Crear un objeto Administrador
        Administrador administrador = new Administrador("Jane Smith", 3000, "29/02/1989", "Departamento de Ventas", 500);

        // Acceder a las propiedades de Empleado
        System.out.println("Empleado:");
        System.out.println("Nombre: " + empleado.getNombre());
        System.out.println("Salario: " + empleado.getSalario());
        System.out.println("Fecha de nacimiento: " + empleado.getFechaNacimiento());

        // Acceder a las propiedades de Administrador
        System.out.println("\nAdministrador:");
        System.out.println("Nombre: " + administrador.getNombre());
        System.out.println("Salario: " + administrador.getSalario());
        System.out.println("Fecha de nacimiento: " + administrador.getFechaNacimiento());
        System.out.println("Departamento: " + administrador.getDepartamento());
        System.out.println("Bono: " + administrador.getBono());
    }
}