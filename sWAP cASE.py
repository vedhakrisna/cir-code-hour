def swap_case(s):
  # function to swap the letters
    k=""
    for i in s:
        if i.isupper():
            i=i.lower()
        else:
            i=i.capitalize()
        k=k+i
    return k

