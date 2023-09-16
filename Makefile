all: clear ponteiro ponteiro_duplo linkedlist

ola: clear
	@echo ==========================
	@echo      PROGRAMA OLA
	@echo ==========================
	@echo Compilando o programa olamundo
	@gcc olamundo.c -o ola > /dev/null 2>&1
	@echo Tornando o programa olamundo executável
	@chmod +x ola > /dev/null 2>&1
	@echo Executando o programa olamundo
	@./ola
	@echo ======================================================

ponteiro:
	@echo
	@echo ==========================
	@echo      PONTEIRO SIMPLES
	@echo ==========================
	@echo Compilando o programa ponteiros
	@gcc ponteiro.c -o ponteiro > /dev/null 2>&1
	@echo Tornando o arquivo executável
	@chmod +x ponteiro > /dev/null 2>&1
	@echo Executando o programa ponteiros
	@echo ======================================================
	@echo
	@./ponteiro

ponteiro_duplo:
	@echo
	@echo ==========================
	@echo      PONTEIRO DUPLO
	@echo ==========================
	@echo Compilando o programa ponteiro duplo
	@gcc ponteiro_duplo.c -o ponteiro_duplo > /dev/null 2>&1
	@echo Tornando o arquivo executável
	@chmod +x ponteiro_duplo > /dev/null 2>&1
	@echo Executando o programa ponteiro duplo
	@echo ======================================================
	@echo
	@./ponteiro_duplo

linkedlist:
	@echo
	@echo ==========================
	@echo  LISTA ENCADEADA SIMPLES
	@echo ==========================
	@echo Compilando o programa LinkedList
	@gcc --std=c99 -DLOG_USE_COLOR log.c log.h LinkedList.c LinkedList.h LinkedListTest.c -o LinkedList
	@echo Tornando o arquivo executável
	@chmod +x LinkedList 
	@echo Executando o programa LinkedList
	@echo ======================================================
	@echo
	@./LinkedList

doublylinkedlist:
	@echo
	@echo ==============================
	@echo  LISTA DUPLAMENTE ENCADEADA
	@echo ==============================
	@echo Compilando o programa DoublyLinkedList
	@gcc  DoublyLinkedList.c DoublyLinkedList.h -o DoublyLinkedList
	@echo Tornando o arquivo executável
	@chmod +x DoublyLinkedList 
	@echo Executando o programa DoublyLinkedList
	@echo ======================================================
	@echo
	@./DoublyLinkedList

generalizedlinkedlist:
	@echo
	@echo ==============================
	@echo  LISTA GENERALIZADA
	@echo ==============================
	@echo Compilando o programa GeneralizedLinkedList
	@gcc  GeneralizedLinkedList.c GeneralizedLinkedList.h GeneralizedLinkedListTest.c -o GeneralizedLinkedList
	@echo Tornando o arquivo executável
	@chmod +x GeneralizedLinkedList 
	@echo Executando o programa GeneralizedLinkedList
	@echo ======================================================
	@echo
	@./GeneralizedLinkedList

clear:
	@echo
	@echo ==========================
	@echo APAGANDO TODOS OS PROGRAMAS
	@echo ==========================
	@echo Removendo o programa ponteiro
	@rm -f ponteiro 
	@echo Removendo o programa ponteiro duplo
	@rm -f ponteiro_duplo 
	@echo Removendo o programa LinkedList
	@rm -f linkedlist
	@echo Removendo o programa GeneralizedLinkedList
	@rm -f generalizedlinkedlist

help:
	@echo
	@echo ==========================
	@echo      	   AJUDA
	@echo ==========================
	@echo "all              | Compila e executa tudo"
	@echo "ponteiro         | Ponteiro Simples"
	@echo "ponteiro_duplo   | Ponteiro Duplo"
	@echo "linkedlist       | LinkedList"
	@echo "clear            | Apaga todos os programas"
	@echo ======================================================
	@echo
