writer = open("merger.txt", "a")

for i in ["AGENDA.txt", "ARRAY.txt", "ARRAY_ORDINATI.txt", "ARRAY_PUNT.txt", "CALC_STD.txt", "ESERCIZI_PROPOSTI.txt", "FUNCTIONS.txt", "FUNZIONI_RICORSIVE.txt", "IF_THEN_ELSE_SWITCH.txt", "IO_SU_FILES.txt", "LOOPS.txt", "MODULAR_AGENDA.txt", "MODULAR_RUBBRICA.txt", "MODULAR_TREE.txt", "PROG_FILE_MULTIPLI.txt", "RUBBRICA.txt", "SORT.txt", "STACK_QUEUE_ARRAY.txt", "STACK_QUEUE_PUNT.txt", "STRINGS.txt", "STRUCT.txt", "TREE.txt"]:
        opener = open(i, "r")
        writer.write("\n\n\n" + i + "\n\n")
        for line in opener:
            writer.write(line)

            
