import java.util.Scanner;

public class MediaWhile {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        double nota1;
        double nota2;
        double nota3;
        double media;

        // pegar o valor 1 e verificar se está de acordo
        while (true) {
            System.out.print("Digite a primeira nota (0 a 10): ");
            nota1 = scanner.nextDouble();
            scanner.nextLine();

            if (nota1 < 0 || nota1 > 10) {
                System.out.println("Dígito incorreto. Digite um valor de 0 a 10.");
            } else {
                break;
            }
        }

        // pegar o valor 2 e verificar se está de acordo
        while (true) {
            System.out.print("Digite a segunda nota (0 a 10): ");
            nota2 = scanner.nextDouble();
            scanner.nextLine();

            if (nota2 < 0 || nota2 > 10) {
                System.out.println("Dígito incorreto. Digite um valor de 0 a 10.");
            } else {
                break;
            }
        }

        // pegar o valor 3 e verificar se está de acordo
        while (true) {
            System.out.print("Digite a terceira nota (0 a 10): ");
            nota3 = scanner.nextDouble();
            scanner.nextLine();

            if (nota3 < 0 || nota3 > 10) {
                System.out.println("Dígito incorreto. Digite um valor de 0 a 10.");
            } else {
                break;
            }
        }

        // calcular a média ponderada
        media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
        System.out.printf("Média: %.2f\n", media);

        // verificar situação do aluno
        if (media >= 6.0) {
            System.out.println("Aprovado");
        } else if (media >= 4.0) {
            System.out.println("Recuperação");
        } else {
            System.out.println("Reprovado");
        }

        scanner.close();
    }
}
