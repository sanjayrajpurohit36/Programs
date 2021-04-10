# display word count per line in a file Mydiary.txt
def WordCountPerLine(file):
    with open(file) as f:
        for idx, line in enumerate(f):
            print(f"Line No {idx + 1}: Words = {len(line.split())}")

WordCountPerLine("Mydiary.txt")