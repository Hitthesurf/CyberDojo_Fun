from blocks import can_make_word

def make_word_A_from_the_blocks():
    assert can_make_word("A") == True

def can_not_make_word_BOOK_from_the_blocks():
    assert can_make_word("BOOK") == False

def can_make_word_TREAT_from_the_blocks():
    assert can_make_word("TREAT") == True

def can_not_make_word_COMMON_from_the_blocks():
    assert can_make_word("COMMON") == False

def can_not_make_word_Confuse_from_the_blocks():
    assert can_make_word("Confuse") == True

def can_make_word_BARK_from_the_blocks():
    assert can_make_word("BARK") == True

def can_not_make_word_CONFUSE_from_the_blocks():
    assert can_make_word("CONFUSE") == True

def can_make_word_SQUAD_from_the_blocks():
    assert can_make_word("SQUAD") == True

def can_make_word__from_the_blocks():
    assert can_make_word("") == True

def can_make_the_largest_possible_string():
    large_string = "BKdpntRGQswuINBEflPM"
    assert can_make_word(large_string) == True

def can_not_make_a_word_over_20_letters():
    large_string = "BKdpntRGQswuINBEflPMB"
    assert can_make_word(large_string) == False

def green_traffic_light_pattern():
    return 'All tests passed'

if __name__ == '__main__':
    make_word_A_from_the_blocks()
    can_not_make_word_BOOK_from_the_blocks()
    can_make_word_TREAT_from_the_blocks()
    can_not_make_word_COMMON_from_the_blocks()
    can_not_make_word_Confuse_from_the_blocks()
    can_make_word_BARK_from_the_blocks()
    can_not_make_word_CONFUSE_from_the_blocks()
    can_make_word_SQUAD_from_the_blocks()
    can_make_word__from_the_blocks()
    can_make_the_largest_possible_string()
    can_not_make_a_word_over_20_letters()
    print(green_traffic_light_pattern())