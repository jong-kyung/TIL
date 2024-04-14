h_fp = open('Hamlet_by_Shakespeare.txt', 'r')

word_dict = dict()

for line in h_fp.readlines():
    for word in line.strip().split():
        word = word.strip(" .;?[]\'\":-!,").lower() # 단어 앞뒤의 특수문자 제거

        if word_dict.get(word) is not None:
            count = word_dict[word]
        else:
            count = 0

        word_dict[word] = count + 1

word_r_dict = {v:k for (k,v) in word_dict.items()} # key와 value를 바꿈

word_dict = {k:v for (v,k) in sorted(word_r_dict.items(), reverse=True) }

for key in word_dict:
    if word_dict[key] >= 100:
        print("단어: ", key, "빈도수: ", word_dict[key])

h_fp.close()