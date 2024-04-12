khan_fp = open('Khan.txt', 'r')

# print(khan_fp.read(10))
# print(khan_fp.readline())
for line in khan_fp.readlines():
    print(line.strip()) # 개행문자 제거

khan_fp.close()