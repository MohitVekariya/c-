<?xml version="1.0" encoding="utf-8"?>
<android.support.constraint.ConstraintLayout
xmlns:android="http://schemas.android.com/apk/res/android"
	xmlns:app="http://schemas.android.com/apk/res-auto"
	xmlns:tools="http://schemas.android.com/tools"
	android:layout_width="match_parent"
	android:layout_height="match_parent"
	tools:context=".MainActivity">

<!-- add button for generating Toast message -->
	<Button
		android:id="@+id/ButtonDisplay"
		android:layout_width="wrap_content"
		android:layout_height="wrap_content"
		android:layout_alignParentLeft="true"
		android:layout_marginTop="209dp"
		android:onClick="onClick"
		android:text="Click"
		app:layout_constraintEnd_toEndOf="parent"
		app:layout_constraintStart_toStartOf="parent"
		app:layout_constraintTop_toTopOf="parent"
		tools:ignore="OnClick" />

</android.support.constraint.ConstraintLayout>

MainActivity.java

package org.geeksforgeeks.simpleToast_Example;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;




public class MainActivity extends AppCompatActivity {

	// Defining the object for button
	Button btn;

	@Override
	protected void onCreate(Bundle savedInstanceState)
	{
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);

		// Bind the components to their respective objects
		// by assigning their IDs
		// with the help of findViewById() method
		
Button btn = (Button)findViewById(R.id.ButtonDisplay);

		btn.setOnClickListener(new View.OnClickListener() {
			@Override
			public void onClick(View v)
			{
				// Displaying simple Toast message
				Toast.makeText(getApplicationContext(),
							"This a toast message",
							Toast.LENGTH_LONG)
					.show();
			}
		});
	}
}