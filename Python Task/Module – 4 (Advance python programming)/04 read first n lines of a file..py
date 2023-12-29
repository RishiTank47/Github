# Write a Python program to read first n lines of a file.

# file=open("read_n_line.txt","x")

lines_to_read=int(input("How many lins you want to read:-"))

if lines_to_read  > 5:
    print("file does not have more than 5 lines.")
else:
    file=open("read_n_line.txt","r")
    for i in range(lines_to_read):
        print(f"line{i}:-",file.readline())

