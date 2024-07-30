# 
---
 공유 슬라이드 [[링크](https://docs.google.com/presentation/d/1453nx14DVMk0nBLW7jpt0g6x7a7z2wuNaJKmcVQi4rw/edit?usp=sharing)]
---

- 기본세팅
    - vmware 설치
    - ubuntu 22.04 설치
    - terminator 설치
    - git 설치
    - vscode 설치
    - github 연동
    - opencv 환경 설정
---


---
## 2024 - 07 - 23
- CmakeLists 기본구조와 활용법
- c_cpp_properties.json 작성과 .gitignore를 활용한 기본셋팅
- imread, imshow 등으로 이미지 출력
    - String folder 를 이용해서 경로지정
- Size, Scalar 를 활용한 화면구성
---

---
## 2024 - 07 - 24
- matrix 연산자 사용예제들
    - CV_8UC1
        - CV : OpenCV를 의미
        - 8 : bit, 8bit를 의미
        - C1 : 채널을 의미, 채널이 1개
    - BGR 순으로 색상입력
    - copyTo
        - 한 행렬의 내용을 다른 행렬로 복사
        - 복사하려는 대상과 크기, 타입이 같아야함
    - setTo
        - 행렬의 모든요소를 특정 값으로 설정
    - Scalar 멤버함수 활용
    - 외부 저장공간에서 데이터를 저장 및 출력
    - 벡터(Vec3d) 
        - 3차원 벡터
        - 색상, 좌표, 기하학적 변환을 표현
        - 3개의 double 타입 요소를 가짐
    - videoCaptur, videoWriter 카메라를 활용한 영상출력
    - 출력한 그림에 line 그리기
    - 키보드 조작기능 추가
---


---
 ## 2024 - 07 - 25
- 마우스(mouse) 이벤트 구현    
    - MouseCallback 함수사용
    - Trackbar를 만들어 이미지 변수값조정
    - createTrackbar 사용
- 이미지 합성하기
    - setTo, copyTo 를 활용해서 이미지에 색상변경 및 함수를 이용해 합성
    - IMREAD_GRAYSCALE
        - 이미지를 불러올때 흑백모드로 불러오기위해 사용
        - 이미지의 색상정보를 무시, 밝기 정보만 사용
- FileStorage
    - 파일 입출력을 위해 사용되는 클래스 (JSON 형식으로 데이터 저장)
    - FileStorage::WRITE 로 입력
    - FileStorage::READ 로 출력
- 챕터과제
    - Scalar(색상 값 저장), vector(vec3d를 사용 마우스 클릭위치의 BRG값을 저장), flag(마우스 클릭상태를 저장)등 으로 구조체 만들기
    - 이미지 출력후 마우스포인트에 사각형 만들기
    - 이미지 클릭시 BRG값 출력
    - ESC키(keycode == 27) 입력시 JSON 파일로 저장
    
- cvtColor 함수
    - 이미지의 색상 공간을 변환하는데 사용
- 히스토그램
    - 이미지, 영상의 밝기값 분포를 나타내는데 주로 사용됨
    - 각 픽셀 값의 빈도를 나타내는 그래프
    - 명암 대비, 밝기, 대조 등을 분석하는데 유용

## 2024 - 07 - 26

    


    



    