                for i, seat in enumerate(val):
                    for item in range(len(seat)):
                        if item == 'X':
                            print('X')
                        else:
                            print('\t', f"{chr(65+i)}{item}", end=" ")
                    print()
                print(f"{'-'*50}\n")