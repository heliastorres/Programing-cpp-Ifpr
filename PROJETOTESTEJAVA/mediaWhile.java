import java.util.Scanner;

public class mediaWhile {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        double nota1;
        double nota2;
        double nota3;
        double media;


        // pegar o valor 1 e verificar se ta de acordo
        while (true) {
            nota1 = scanner.nextDouble();
            scanner.nextLine();

            if (nota1 < 0  nota1 > 10) {
                System.out.println("Digito íncorreto. Digite um valor de 0 a 10." );
                continue;
            } else {
                break;
            }
        }
        // pegar o valor 2 e verificar se ta de acordo
        while (true) {
            nota2 = scanner.nextDouble();
            scanner.nextLine();

            if (nota2 < 0  nota2 > 10) {
                System.out.println("Digito íncorreto. Digite um valor de 0 a 10." );
                continue;
            } else {
                break;
            }
        }

        // pegar o valor 3 e verificar se ta de acordo
        while (true) {
            nota3 = scanner.nextDouble();
            scanner.nextLine();

            if (nota3 < 0 || nota3 > 10) {
                System.out.println("Digito íncorreto. Digite um valor de 0 a 10." );
                continue;
            } else {
                break;
            }
        }

        // fazer media ponderada: (nota1 * 2, nota2 * 3, nota3 *5) / 10


        // fazer a verificação, se a nota for == 60 passou. Menor que 60 recuperação. Menor que 40 reprovado

    }
}