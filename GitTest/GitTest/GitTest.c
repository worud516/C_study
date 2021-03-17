#include <stdio.h>

void main() {
	/*
	내 pc 집에서 업데이트 할때는 이렇게 하면됨
	
	커밋할 파일 장바구니에 담기
	git add .
	커밋
	git commit -m "커밋 메시지"
	푸시
	git push origin master

	
	참고 자료
	https://backlog.com/git-tutorial/kr/intro/intro1_1.html



	Bash Shell 기본 명령어
	ls : 파일 리스트 출력
	ls -l : 파일 리스트 출력(좀더 자세한 정보)
	ll : 파일 리스트 출력(좀더 자세한 정보)
	ls -al : 파일 리스트 출력(좀더 자세한 정보 + 숨김파일까지 표시)
	clear : 화면 지우기
	pwd : 현재 위치 표시
	cd ~ : 자신(운영체제 사용자)의 개인폴더로 이동
	cd /폴더명A/폴더명B : 루트폴더 기준에서 해당 폴더로 이동(절대이동)
	팁 : 대부분의 경우 ./는 생략가능
	cd ./폴더명 : 해당 폴더로 이동(상대이동)
	cd .. : 상위 폴더로 이동(상대이동)
	rmdir ./폴더명 : 디렉토리 삭제(디렉토리안에 파일이 없어야 함)
	mkdir ./폴더명 : 디렉토리 생성
	mkdir -p ./폴더명A/폴더명B : 디렉토리를 한번에 여러개 생성
	vim 문서파일명 : 문서파일을 수정하거나 만들기 위한 VIM 에디터를 실행한다.
	a : vim에서 수정모드로 변경한다.
	esc : vim에서 메뉴모드로 변경한다.
	메뉴 모드에서 :wq : 저장한다.
	rm 파일명 : 파일을 지운다.
	echo ~ : 현재 사용자의 폴더경로를 화면에 출력한다.
	echo 1 : 1을 화면에 출력한다.
	echo "원숭이도 이해 할 수 있는 Git" : 내용을 화면에 출력한다.
	ech	o "원숭이도 이해 할 수 있는 Git" > sample.txt : 내용을 sample.txt 파일안에 출력한다.
	cat sample.txt : sample.txt의 내용을 화면에 출력한다.
	ls -al | fgrep 'sshd' : 현재 디렉토리의 파일리스트 중에서 결과중에서 sshd가 포함된 줄만 추린다.
	ps -aux | fgrep 'sshd' : 현재 실행중인 프로세스리스트 중에서 결과중에서 sshd가 포함된 줄만 추린다.
	ps -aux | fgrep 'sshd' > a.txt : 현재 실행중인 프로세스리스트 중에서 결과중에서 sshd가 포함된 줄만 추린다. 그후 그것을 화면이 아닌 a.txt 파일안에 출력한다.
	zip a.zip a.txt b.txt : a.txt와 ]를 a.zip로 압축한다.
	unzip a.zip : a.zip의 압축을 푼다.
	


	git 사용법
	github.com 에서 원격 레파지토리 생성

	저장소 주소 저장(상단에 https://github.com/... 으로 시작하는 주소)

	이클립스에서 새로 생성한 프로젝트 또는 이미 생성되어있는 프로젝트를 선택한 후 우클릭.
	properties 선택 후 location 에 화살표 모양으로 프로젝트 폴더 열기

	우클릭 - 새로만들기 - 텍스트문서 선택하여 파일 생성

	파일명 .gitignore 로 생성

	내용에 .settings bin .classpath .project 추가 후 저장

	다시 탐색기에서 우클릭 후 git bash here 선택

	명령어 : git init (해당 폴더에 git 저장소를 만들겠다.)

	명령어 : git remote add origin 저장소주소 (저장소주소를 origin으로 별명짓겟다)

	명령어 : git add . (git 저장소에 반영할 파일들을 선별하겠다)

	명령어 : git commit -m "커밋메시지" (add로 선별된 파일들을 git 저장소에 적용하겠다.)

	git config --global credential.helper manager
	git credential-manager delete https://github.com
	git config --global user.email "email"
	git config --global user.name "name"
	명령어 : git push origin master (나의 git 저장소의 상태를 원격저장소에 저장하겠다.)



	최초에 가져오기(꼭 워크스페이스 폴더에서 실행)
	git clone https://github.com/jhs512/cuni.git cuni
	repository 내 모든 수정 되돌리기
	git checkout .
	내 소스코드를 조장의 리포지터리의 최신 버전으로 만들기
	git checkout .
	git pull origin master
	특정 폴더 아래의 모든 수정 되돌리기
	git checkout {dir}
	특정 파일의 수정 되돌리기
	git checkout {file_name}
	git add 명령으로 stage에 올린 경우 되돌리기
	git reset
	과거로 돌아가기
	git checkout {커밋번호}
	현재로 돌아오기
	git checkout .
	git checkout master
	git checkout .
	git 로그인 정보 없애기
	git config --global credential.helper manager
	git credential-manager delete https://github.com
	
	*/

	

}