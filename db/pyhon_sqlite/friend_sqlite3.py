import sqlite3
def connect():
    conn = sqlite3.connect("/home/smart/work/dbfiles/person.db")
    cursor=conn.cursor()
    return conn

def create():

    conn=connect()
    cursor=conn.cursor()

    sql="""
    create table if not exists friend(
    f_id integer primary key,
    f_name text not null
    );
    """

    cursor.execute(sql)

    conn.commit()

    print("테이블 생성 완료")

    conn.close()

def show_list():
    conn=connect()
    cursor=conn.cursor()

    sql="""
    select * from friend;
    """
    cursor.execute(sql)

    rows=cursor.fetchall()

    print("==\[친구목록]/==")
    for row in rows:
        print(row)

    conn.close()

def add_friend():
    conn=connect()
    cursor=conn.cursor()

    f_id=int(input('친구 아이디 : '))
    f_name=input('친구 이름 : ')

    sql="""
    insert into friend(f_id, f_name) values(?,?);
"""
    
    cursor.execute(sql, (f_id, f_name))
    
    conn.commit()

    print("친구 추가 완료")

    conn.close()

def delete_friend():
    conn=connect()
    cursor=conn.cursor()

    f_id=int(input('삭제할 친구 아이디 : '))

    sql="""
    delete from friend where f_id=?;
"""
    
    cursor.execute(sql, (f_id,))

    conn.commit()

    print("친구 삭제 완료")

    conn.close()

def update_friend():
    conn=connect()
    cursor=conn.cursor()

    f_id=int(input('수정할 친구 아이디 : '))
    f_name=input('수정할 이름 : ')

    sql="""
    update friend set f_name=? where f_id=?;""" 

    cursor.execute(sql, (f_name, f_id))

    conn.commit()

    print("이름 수정 완료")

    conn.close()

def main():
    create()
    while True:
        print(""" 
=============================
1. 친구 리스트 출력
2. 친구추가
3. 친구삭제
4. 이름변경
0. 종료
==============================
""" )
        choice = input('번호 : ')

        if choice == '1':
            show_list()
        elif choice =='2':
            add_friend()
        elif choice == '3':
            delete_friend()
        elif choice == '4':
            update_friend()
        elif choice == '0':
            print('종료')
            break
        else:
            print("잘못된 번호 입니다.")




if __name__ == "__main__":
    main()

