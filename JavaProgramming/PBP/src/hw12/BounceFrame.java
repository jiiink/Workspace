package hw12;

import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JPanel;

class BounceFrame extends JFrame {
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	public BounceFrame() {
		setTitle("BounceThread");
		setSize(DEFAULT_WIDTH, DEFAULT_HEIGHT);
		
		// about menu
		final JMenu speedMenu = new JMenu("Speed");
		final JMenuItem fasterItem = speedMenu.add(new SpeedAction("Faster"));
		final JMenuItem slowerItem = speedMenu.add(new SpeedAction("Slower"));

		final JMenu sizeMenu = new JMenu("Size");
		final JMenuItem biggerItem = sizeMenu.add(new SizeAction("Bigger"));
		final JMenuItem smallerItem = sizeMenu.add(new SizeAction("Smaller"));
		
		final JMenuBar menuBar = new JMenuBar();
		setJMenuBar(menuBar);
		menuBar.add(speedMenu);
		menuBar.add(sizeMenu);
		// end menu
		
		
		ballPanel = new BallPanel(); add(ballPanel, BorderLayout.CENTER);
		final JPanel buttonPanel = new JPanel();

		addButton(buttonPanel, "Add 1", (final ActionEvent event) -> addBall());
		addButton(buttonPanel, "Add 2", (final ActionEvent event) -> {
			addBall();
			try {
				Thread.sleep(100);
			} catch (final InterruptedException e) {
				e.printStackTrace();
			}
			addBall();
		});

		addButton(buttonPanel, "Close", (final ActionEvent event) -> System.exit(0));
		add(buttonPanel, BorderLayout.SOUTH);
	}
	private void addButton(final Container container, final String title, final ActionListener listener) {
		final JButton button = new JButton(title);
		container.add(button);
		button.addActionListener(listener);
	}	
		/**
		Adds a bouncing ball to the canvas and starts a thread to make it bounce
		*/
	public void addBall() {
		final Ball b = new Ball(ballSpeed, ballSize);
		ballPanel.add(b);
		final Runnable r = new BallRunnable(b, ballPanel);
		final Thread t = new Thread(r);
		t.start();
	}
	private final BallPanel ballPanel;
	public static final int DEFAULT_WIDTH = 450;
	public static final int DEFAULT_HEIGHT = 350; 
	
	private static double ballSpeed = 1;
	private static double ballSize = 1;
	public static void setBallSpeed(double ratio) {
		ballSpeed *= ratio;
	}
	public static void setBallSize(double ratio) {
		ballSize *= ratio;
	}
}

