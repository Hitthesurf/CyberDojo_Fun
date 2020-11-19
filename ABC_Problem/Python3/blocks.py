def can_make_word(word):
    my_blocks = [['B', 'O'], ['X', 'K'], ['D', 'Q'], ['C', 'P'], ['N', 'A'],
                 ['G', 'T'], ['R', 'E'], ['T', 'G'], ['Q', 'D'], ['F', 'S'],
                 ['J', 'W'], ['H', 'U'], ['V', 'I'], ['A', 'N'], ['O', 'B'],
                 ['E', 'R'], ['F', 'S'], ['L', 'Y'], ['P', 'C'], ['Z', 'M']]

    word = word.upper()
    for char in word:
        found_block_for_char = False
        for index in range(0, len(my_blocks)):
            if char == my_blocks[index][0] or char == my_blocks[index][1]:
                del my_blocks[index]
                found_block_for_char = True
                break
        if found_block_for_char is False:
            return False
    return True
