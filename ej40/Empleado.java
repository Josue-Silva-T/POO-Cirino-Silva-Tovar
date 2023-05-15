public class Empleado {
    private String nombre;
    private double salario;
    private String fechaNacimiento;

    public Empleado(String nombre, double salario, String fechaNacimiento) {
        this.nombre = nombre;
        this.salario = salario;
        this.fechaNacimiento = fechaNacimiento;
    }

    public String getNombre() {
        return nombre;
    }

    public double getSalario() {
        return salario;
    }

    public String getFechaNacimiento() {
        return fechaNacimiento;
    }
}