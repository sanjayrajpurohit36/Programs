def fileCopy(firstFile, secondFile):
    Fin = open(firstFile, "r")
    Fout = open(secondFile, "w")
    while True:
        text = Fin.readline()
        if len(text) == 0:
            break
        if(text[0] =="@"):
            continue
        Fout.write(text)
    Fin.close()
    Fout.close()

fileCopy("source.txt", "destination.txt")