package com.example.sim_cal;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    EditText e1, e2;
    Button a, s, m, d;
    String s1,s2,s3;
    int num1,num2,num3;
    TextView res;



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        a = findViewById(R.id.add);
        s = findViewById(R.id.sub);
        m = findViewById(R.id.mul);
        d = findViewById(R.id.div);
        e1 = findViewById(R.id.no1);
        e2 = findViewById(R.id.no2);
        res = findViewById(R.id.res);


        d.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                s1 = e1.getText().toString();
                s2 = e2.getText().toString();
                num1 = Integer.parseInt(s1);
                num2 = Integer.parseInt(s2);
                num3 = num1 / num2;
                s3 = Integer.toString(num3);
                res.setText(s3);
            }
        });
        m.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                s1 = e1.getText().toString();
                s2 = e2.getText().toString();
                num1 = Integer.parseInt(s1);
                num2 = Integer.parseInt(s2);
                num3 = num1 * num2;
                s3 = Integer.toString(num3);
                res.setText(s3);
            }
        });

        s.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                s1 = e1.getText().toString();
                s2 = e2.getText().toString();
                num1 = Integer.parseInt(s1);
                num2 = Integer.parseInt(s2);
                num3 = num1 - num2;
                s3 = Integer.toString(num3);
                res.setText(s3);
            }
        });

        a.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                s1 = e1.getText().toString();
                s2 = e2.getText().toString();
                num1 = Integer.parseInt(s1);
                num2 = Integer.parseInt(s2);
                num3 = num1 + num2;
                s3 = Integer.toString(num3);
                res.setText(s3);

            }
        });




    }
}
