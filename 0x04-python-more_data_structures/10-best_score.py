def best_score(a_dictionary):
    if not a_dictionary:
        return None

    highest = None
    max_value = float('-inf')

    for key, value in a_dictionary.items():
        if isinstance(value, int) and value > max_value:
            max_value = value
            highest = key
    return highest
