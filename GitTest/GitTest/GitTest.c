#include <stdio.h>

void main() {
	/*
	�� pc ������ ������Ʈ �Ҷ��� �̷��� �ϸ��
	
	Ŀ���� ���� ��ٱ��Ͽ� ���
	git add .
	Ŀ��
	git commit -m "Ŀ�� �޽���"
	Ǫ��
	git push origin master

	
	���� �ڷ�
	https://backlog.com/git-tutorial/kr/intro/intro1_1.html



	Bash Shell �⺻ ��ɾ�
	ls : ���� ����Ʈ ���
	ls -l : ���� ����Ʈ ���(���� �ڼ��� ����)
	ll : ���� ����Ʈ ���(���� �ڼ��� ����)
	ls -al : ���� ����Ʈ ���(���� �ڼ��� ���� + �������ϱ��� ǥ��)
	clear : ȭ�� �����
	pwd : ���� ��ġ ǥ��
	cd ~ : �ڽ�(�ü�� �����)�� ���������� �̵�
	cd /������A/������B : ��Ʈ���� ���ؿ��� �ش� ������ �̵�(�����̵�)
	�� : ��κ��� ��� ./�� ��������
	cd ./������ : �ش� ������ �̵�(����̵�)
	cd .. : ���� ������ �̵�(����̵�)
	rmdir ./������ : ���丮 ����(���丮�ȿ� ������ ����� ��)
	mkdir ./������ : ���丮 ����
	mkdir -p ./������A/������B : ���丮�� �ѹ��� ������ ����
	vim �������ϸ� : ���������� �����ϰų� ����� ���� VIM �����͸� �����Ѵ�.
	a : vim���� �������� �����Ѵ�.
	esc : vim���� �޴����� �����Ѵ�.
	�޴� ��忡�� :wq : �����Ѵ�.
	rm ���ϸ� : ������ �����.
	echo ~ : ���� ������� ������θ� ȭ�鿡 ����Ѵ�.
	echo 1 : 1�� ȭ�鿡 ����Ѵ�.
	echo "�����̵� ���� �� �� �ִ� Git" : ������ ȭ�鿡 ����Ѵ�.
	ech	o "�����̵� ���� �� �� �ִ� Git" > sample.txt : ������ sample.txt ���Ͼȿ� ����Ѵ�.
	cat sample.txt : sample.txt�� ������ ȭ�鿡 ����Ѵ�.
	ls -al | fgrep 'sshd' : ���� ���丮�� ���ϸ���Ʈ �߿��� ����߿��� sshd�� ���Ե� �ٸ� �߸���.
	ps -aux | fgrep 'sshd' : ���� �������� ���μ�������Ʈ �߿��� ����߿��� sshd�� ���Ե� �ٸ� �߸���.
	ps -aux | fgrep 'sshd' > a.txt : ���� �������� ���μ�������Ʈ �߿��� ����߿��� sshd�� ���Ե� �ٸ� �߸���. ���� �װ��� ȭ���� �ƴ� a.txt ���Ͼȿ� ����Ѵ�.
	zip a.zip a.txt b.txt : a.txt�� ]�� a.zip�� �����Ѵ�.
	unzip a.zip : a.zip�� ������ Ǭ��.
	


	git ����
	github.com ���� ���� �������丮 ����

	����� �ּ� ����(��ܿ� https://github.com/... ���� �����ϴ� �ּ�)

	��Ŭ�������� ���� ������ ������Ʈ �Ǵ� �̹� �����Ǿ��ִ� ������Ʈ�� ������ �� ��Ŭ��.
	properties ���� �� location �� ȭ��ǥ ������� ������Ʈ ���� ����

	��Ŭ�� - ���θ���� - �ؽ�Ʈ���� �����Ͽ� ���� ����

	���ϸ� .gitignore �� ����

	���뿡 .settings bin .classpath .project �߰� �� ����

	�ٽ� Ž���⿡�� ��Ŭ�� �� git bash here ����

	��ɾ� : git init (�ش� ������ git ����Ҹ� ����ڴ�.)

	��ɾ� : git remote add origin ������ּ� (������ּҸ� origin���� �������ٴ�)

	��ɾ� : git add . (git ����ҿ� �ݿ��� ���ϵ��� �����ϰڴ�)

	��ɾ� : git commit -m "Ŀ�Ը޽���" (add�� ������ ���ϵ��� git ����ҿ� �����ϰڴ�.)

	git config --global credential.helper manager
	git credential-manager delete https://github.com
	git config --global user.email "email"
	git config --global user.name "name"
	��ɾ� : git push origin master (���� git ������� ���¸� ��������ҿ� �����ϰڴ�.)



	���ʿ� ��������(�� ��ũ�����̽� �������� ����)
	git clone https://github.com/jhs512/cuni.git cuni
	repository �� ��� ���� �ǵ�����
	git checkout .
	�� �ҽ��ڵ带 ������ �������͸��� �ֽ� �������� �����
	git checkout .
	git pull origin master
	Ư�� ���� �Ʒ��� ��� ���� �ǵ�����
	git checkout {dir}
	Ư�� ������ ���� �ǵ�����
	git checkout {file_name}
	git add ������� stage�� �ø� ��� �ǵ�����
	git reset
	���ŷ� ���ư���
	git checkout {Ŀ�Թ�ȣ}
	����� ���ƿ���
	git checkout .
	git checkout master
	git checkout .
	git �α��� ���� ���ֱ�
	git config --global credential.helper manager
	git credential-manager delete https://github.com
	
	*/

	

}