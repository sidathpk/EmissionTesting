package com.example.emissiontesting;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
public void createAcc(View view)
{
    Intent intent=new Intent(this,CreateAcc.class);
    startActivity(intent);
}
    public void ResultActivity(View view)
    {
        Intent intent=new Intent(this,ResultActivity.class);
        startActivity(intent);
    }
}
