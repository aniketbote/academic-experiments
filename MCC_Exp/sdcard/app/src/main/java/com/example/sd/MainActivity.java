package com.example.sd;

import android.Manifest;
import android.os.Environment;
import android.support.v4.content.ContextCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class MainActivity extends AppCompatActivity {
    EditText e1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        e1 = findViewById(R.id.msg);

    }

    public void cleardata(View view) {
        e1.setText("");
    }

    public void readdata(View view){
        try {
            File f = new File("/sdcard/myfile2222222.txt");
            FileInputStream fin = new FileInputStream(f);
            BufferedReader bf = new BufferedReader(new InputStreamReader(fin));
            String drow;
            String ddoc = "";
            while ((drow = bf.readLine()) != null) {
                ddoc+= drow + " ";
            }
            e1.setText(ddoc);
            bf.close();
            fin.close();
            Toast.makeText(getBaseContext(), "Data read", Toast.LENGTH_LONG).show();
        }
        catch (Exception e){
            Toast.makeText(getBaseContext(),e.getMessage(),Toast.LENGTH_LONG).show();
        }
    }


    public void writedata(View view) {
        try {
            File f = new File("/sdcard/myfile2222222.txt");
            f.createNewFile();
            FileOutputStream fout = new FileOutputStream(f);
            OutputStreamWriter mout = new OutputStreamWriter(fout);
            mout.append(e1.getText().toString());
            mout.close();
            fout.close();
            Toast.makeText(getBaseContext(), "Data written", Toast.LENGTH_LONG).show();
        }
        catch (Exception e){
            Toast.makeText(getBaseContext(),e.getMessage(),Toast.LENGTH_LONG).show();
        }




    }
}
