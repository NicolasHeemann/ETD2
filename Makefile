ola: clean
	@echo "=========================================="
	@echo "            Programa Ola                  "
	@echo "=========================================="
	@echo "compilando o programa olamundo"
	gcc olamundo.c -o ola
	@echo "Tornando o programa olamundo executável"
	chmod +x ola
	@echo "Executando o programa olamundo"
	./ola
	@echo "=========================================="
clean:
	@echo "=========================================="
	@echo "     Limpando os programas compilados     "
	@echo "=========================================="
	@echo "Removendo o programa olamundo"
	rm -f ola
	@echo "=========================================="
help:
	@echo "=========================================="
	@echo "             AJUDA                        "
	@echo "=========================================="
	@echo "help       | ajuda"
	@echo "ola        | executa mensagem de teste"
	@echo "clean      | apaga códigos compilados"