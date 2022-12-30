#include <stdio.h>
#include <string.h>

int main() {
	// Mensagem a ser cifrada
	char message[100];
	
	printf("Digite a mensagem a ser cifrada: ");
	scanf("%[^\n]%*c", message);
	
	// Deslocamento da cifra (n�mero de posi��es para deslocar cada letra)
	int shift = 3;
	
	// Cifra a mensagem
	for (int i = 0; i < strlen(message); i++) {
	    // Se o caractere � uma letra min�scula
	    if (message[i] >= 'a' && message[i] <= 'z') {
	        // Desloca a letra para a direita no alfabeto
	        message[i] = ((message[i] - 'a' + shift) % 26) + 'a';
	    }
	    // Se o caractere � uma letra mai�scula
	    else if (message[i] >= 'A' && message[i] <= 'Z') {
	        // Desloca a letra para a direita no alfabeto
	        message[i] = ((message[i] - 'A' + shift) % 26) + 'A';
	    }
	}
	
	// Imprime a mensagem cifrada
	printf("Mensagem cifrada: %s\n", message);

return 0;
}

