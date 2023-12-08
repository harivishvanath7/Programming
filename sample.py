fname = input("Enter the file name : ")
if len(fname) < 1:
    fname = "sample.txt"
fhand = open(fname)

dic = dict()

for line in fhand:
    line = line.rstrip()
    wds = line.split()

    for w in wds:
        dic[w] = dic.get(w,0) + 1

largest = -1
theword = None

for k, v in dic.items():
    if v > largest:
        largest = v
        theword = k

print(theword, largest)
