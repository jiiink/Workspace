
import re

text ='''
원래 Python은 미국 지역에서 개발되었기 때문에, 한글이나 한자와 같은 2바이트 문자를 지원하지 않았다.
그러나 Python 2.0 에서 unicode 문자형을 새로 도입하여 여러 나라의 언어를 다룰 수 있게 되었다.
다른 스크립트 언어와 달리, Python에서는 문자의 인코딩과 내부 unicode 표현을 명확하게 구별한다.
unicode 문자는 메모리에 저장되는 추상적인 개체이다. 화면에 나타내거나 파일 입출력을 할 때는 변환 코덱의 힘을 빌려서 특정 인코딩으로 변환한다.
또, 소스 코드의 문자 코드를 인식하는 기능이 있어, 다른 문자 코드로 쓰여진 프로그램의 동작이 달라질 위험을 줄여 준다.
Python 2.4 에서는, 한중일 코덱이 표준으로 배포판에 포함되었으므로, 이제 한글 처리에 문제는 거의 없다.
예를 들어 통합 개발 환경(IDLE)의 MS Windows 판에서 한글 입출력을 잘 지원한다.
Python은 다음의 형들을 갖고 있다:

기본 자료형: 정수형
 1 긴 정수형 - 메모리가 허락하는 한 무제한의 자리수로 정수를 계산할 수 있다.
 2 부동 소수점수형
 3 복소수형
 4 문자형
 5 유니코드 문자형
 6 함수형

집합적 자료형: 리스트형 - 내부의 값을 나중에 바꿀 수 있다.
 1 Tuple형 - 한 번 값을 정하면 내부의 값을 바꿀 수 없다.
 2 Dictionary형 - 내부의 값을 나중에 바꿀 수 있다.
 3 Set형 - 중복을 허락하지 않는다. 변경 가능하게도, 변경 불가능하게도 만들 수 있다.


또 많은 객체 지향 언어와 같이, 사용자가 새롭게 자신의 형을 정의할 수도 있다.
Python은 동적 타이핑 언어이기 때문에, 변수가 아닌 값이 타입을 가지고 있고, 변수는 모두 값의 참조이다.

'''

en_to_kor = {"Python":"파이썬","unicode" : "유니코드", "Tuple":"튜플", "Dictionary" :"사전","Set":"집합","MS" : "마이크로소프트사"}

for key in en_to_kor :
    text = text.replace(key,en_to_kor[key]);

print(text)