menu = 0
friends = []

while menu != 9:
    print("----------------")
    print("1. 친구 리스트 출력")
    print("2. 친구추가")
    print("3. 친구삭제")
    print("4. 이름변경")
    print("9. 종료")

    menu = int(input("메뉴를 선택하세요: "))
    if menu == 1:
        print(friends)
    elif menu ==2:
        new_friends = input("이름을 입력하세요: ")
        friends.append(new_friends)
    elif menu == 3:
        del_friends = input("삭제하고 싶은 이름을 입력하세요: ")
        if del_friends in friends:
            friends.remove(del_friends)
        else :
            print("이름이 발견되지 않음")
    elif menu == 4:
        old_friends = input("변경하고 싶은 이름을 입력하세요: ")
        if old_friends in friends:
            index = friends.index(old_friends)
            new = input("새로운 이름을 입력하세요: ")
            friends[index] = new
        else:
            print("이름이 발견되지 않음")
    elif menu == 9:
        break
