# 42Seoul 프로젝트 및 과제

## Skills

   ![image](https://github.com/user-attachments/assets/28ab36d3-f342-43af-9b46-9a8a2e7d897e)![image](https://github.com/user-attachments/assets/ad435700-5e5b-4d14-a7ba-5acca0e96782)![image](https://github.com/user-attachments/assets/9c502222-54d3-480a-8865-7984a5c5880a)


## 1️⃣ libft 
### [재사용 가능한 나만의 라이브러리 만들기](https://www.notion.so/Libft-1f36b5ebe74e4f608673d72efaba1743)
* C 라이브러리 함수들을 C언어로 직접 구현하여 나만의 라이브러리를 만드는 과제


## 2️⃣ ft_printf
### [printf 함수 구현](https://hypnotic-ocelot-c39.notion.site/ft_printf-6d51c7e8e1f84a2a8f42cf1bf02bff74?pvs=4)
* stdio.h의 printf 함수를 가변 파라미터를 활용하여 직접 구현하는 과제


## 3️⃣ get_next_line
### [파일 디스크립터로부터 읽어온 하나의 라인을 반환하는 함수 작성](https://www.notion.so/Get_next_line-ce130298938e43c9935ff8ea32fb5653)


## 4️⃣ push_swap
### [두 개의 스택(A, B)에 들어있는 숫자들을 주어진 연산들을 활용하여 스택A에 들어있는 숫자를 오름차순으로 정렬하기](https://www.notion.so/Push_swap-0682826102ec42be9365a963f585810c)
#### 주어진 연산
* sa: A의 가장 위에 있는 두 원소의 위치를 서로 바꾼다.
* sb: B의 가장 위에 있는 두 원소의 위치를 서로 바꾼다.
* ss: sa와 sb를 동시에 실행한다.
* pa: B에서 가장 위(탑)에 있는 원소를 가져와서 A의 맨 위(탑)에 넣는다. B가 비어 있으면 아무 것도 하지 않는다.
* pb: A에서 가장 위(탑)에 있는 원소를 가져와서 B의 맨 위(탑)에 넣는다. A가 비어 있으면 아무 것도 하지 않는다.
* ra: A의 모든 원소들을 위로 1 인덱스만큼 올린다. 첫 번째 원소(탑)는 마지막 원소(바텀)가 된다.
* rb: B의 모든 원소들을 위로 1 인덱스만큼 올린다. 첫 번째 원소(탑)는 마지막 원소(바텀)가 된다.
* rr: ra와 rb를 동시에 실행한다.
* rra: A의 모든 원소들을 아래로 1 인덱스만큼 내린다. 마지막 원소(바텀)는 첫 번째 원소(탑)가 된다.
* rrb: B의 모든 원소들을 아래로 1 인덱스만큼 내린다. 마지막 원소(바텀)는 첫 번째 원소(탑)가 된다.
* rrr: rra와 rrb를 동시에 실행한다.
#### 알고리즘
Quick sort 알고리즘을 기반으로 스택을 3블록으로 나누어 정렬한 후 블록을 정렬하여 최소한의 연산이 사용되도록 최적화를 함

## 5️⃣ born2beroot
### [Linex 환경 설정](https://www.notion.so/Born2beroot-6fd77f8eadfe4692ba421d60c0ff1a2f)
* SUDO
* UFW
* SSH

## 6️⃣ pipex
### [Shell의 파이프(|)와 동일하게 동작하는 함수 만들기](https://hypnotic-ocelot-c39.notion.site/PIPEX-28f17bb7bb33449ba5e9d386a77f759d?pvs=4)
* 부모-자식 프로세스간 연결하기
* 사용 가능한 함수 : fork, pipe, access, open, close, execve, perror, waitpid

## 7️⃣ so_long
### [2D 게임 만들기](https://hypnotic-ocelot-c39.notion.site/So_long-000e6f72c4d04313be71b5841c41ed7b?pvs=4)
* 42에서 제공하는 miniLibX를 활용하여 게임 제작
* 맵 파일의을 검증 후 실행
* 맵 파일을 통해 탈출구(E), 수집품(C), 플레이어(P), 벽(1), 필드(0) 배치
* 플레이어가 모든 수집품을 수집 후 탈출하면 성공

## 8️⃣ philosophers
### [식사하는 철학자](https://hypnotic-ocelot-c39.notion.site/Philosophers-701e45321d1340168a92bd52dd9ae78e?pvs=4)
* Deadlock, Data Race가 발생하지 않도록 유의
* Thread, Mutex 등 운영체제의 이해

## 9️⃣ minishell
### [zshell의 일부 기능들을 구현하는 프로젝트](https://hypnotic-ocelot-c39.notion.site/Minishell-c9ec484d4a044897aad15c3585f91181?pvs=4)
* 토큰 단위로 명령어 파싱
* 쉘에서 쉘을 여는 경우를 처리하기 위해 시그널 처리 필요
* 앞 선 과제의 파이프를 활용하여 다중 파이프 구현

## 🔟 minirt
### 레이 트레이싱을 직접 구현하여 렌더링 엔진 제작
* 빛, 앰비언트, 카메라, 오브젝트 등의 정보, 위치, 방향을 맵에서 읽어 렌더링
* 빛, 카메라 등 모든 오브젝트들에 대해 선택 후 이동, 회전, 크기 조정 가능
* 맵 파싱 필요

## 1️⃣1️⃣ cpp_module00 ~ 09
### 과제 수행을 하며 C++의 기능과 특징을 학습

## 1️⃣2️⃣ netpractice
### [네트워크, IP, SubnetMask 개념 이해](https://hypnotic-ocelot-c39.notion.site/NetPractice-7576319ae4a4488893cca33cea0e7c4d?pvs=4)

## 1️⃣3️⃣ [ft_irc](https://apple-comic-28d.notion.site/ft_irc-26b3cfd289574ca3b5eb0e40ef230e08?pvs=4)
### IRC(Internet Relay Chat) 상용 클라이언트와 소통 가능한 서버 및 봇 구현
* RFC 문서를 통한 프로토콜 이해
* 소켓 통신으로 클라이언트들이 정상 작동할 수 있는 서버 구현
* 봇에게 특정 메세지를 보내어 클라이언트에 없는 기능을 제공

## 1️⃣4️⃣ inception
### [Docker와 docker-compose를 사용하여 사용자 환경 컨테이너화 하기](https://hypnotic-ocelot-c39.notion.site/inception-3c774b46056a4d2c82bdfdabd02476e0?pvs=4)
* mariadb, wordpress, nginx 컨테이너화 하여 환경 구분
* 포트 통신을 통하여 하나의 서비스로 동작

## 1️⃣5️⃣ ft_trenscendence
### 웹 핑퐁 게임 프로젝트
* 로그인, 프로필, 친구 추가, 채팅방, 게임, 2차 인증을 포함하는 웹 게임 개발
* Docker로 프론트엔드, 백엔드 환경을 개별로 구축
* 프론트엔드 : React + Typescript
* 백엔드 : Nestjs + Mariadb
