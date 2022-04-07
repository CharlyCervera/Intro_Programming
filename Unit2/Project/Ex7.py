def rev_sencence(sentence):
    words = sentence.split(' ')
    reverse_sentence = ' '.join(reversed(words))

    return reverse_sentence

if __name__ == "__main__":
    input = 'hola mi buen mundo'
    print (rev_sencence(input))