package game;

class Buss extends Thread{

	/*public BusTest(String this.getName()){this.this.getName() = this.getName();}*/

	private int k = (int)(4*Math.random());
	private int seat = 10;
	public void run(){

		synchronized(this){

			
			for(int i=1;i<=4;i++) {
			if((seat-k)<0){try {

			System.out.println("--------------------------------");

			System.out.println(Thread.currentThread( ).getName( )+"�� ������.");

			System.out.println("������ �¼��� : "+ seat +"��û�¼��� : "+ k);

			System.out.println("�¼������� �Ұ����մϴ�.");

			System.out.println(Thread.currentThread( ).getName( )+"�� �����ϴ�.");

			System.out.println("--------------------------------"); 
			this.notify();
			this.wait();break;
			}catch(InterruptedException e){ 
                e.printStackTrace( ); }}

			else try {Busseat(k);
			System.out.println("--------------------------------");

				System.out.println(Thread.currentThread( ).getName( )+"�� ������.");

				System.out.println("������ �¼��� : "+ seat +"��û�¼��� : "+ k);

				System.out.println(k +" �¼��� ����Ǿ���.");

				System.out.println(Thread.currentThread( ).getName( )+"�� �����ϴ�.");

				System.out.println("--------------------------------");

				this.notify(); 
				this.wait();
			}catch(InterruptedException e){ 
                e.printStackTrace( ); }
			}
		}

		}	

	

	public void Busseat(int s){

		seat -= s;}

	public int seat(){return seat;}

}

 

 

public class Bus {

			public static void main(String[] args){

				Buss t = new Buss();
				
				Thread t2 = new Thread(t,"Thread-1");
				Thread t1 = new Thread(t,"Thread-0");
				Thread t3 = new Thread(t,"Thread-2");

						

				t1.start();

				t2.start();

				t3.start();

			}

}

 