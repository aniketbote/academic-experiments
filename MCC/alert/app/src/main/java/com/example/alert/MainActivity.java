package com.example.alert;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void notify(View view) {
        EditText e1 = findViewById(R.id.msg);
        Intent intent = new Intent(this,Main2Activity.class);
        PendingIntent pending = PendingIntent.getActivity(this,0,intent,0);
        Notification noti = new Notification.Builder(this)
                .setContentTitle("New message")
                .setContentText(e1.getText().toString()).setSmallIcon(R.mipmap.ic_launcher)
                .setContentIntent(pending).build();
        NotificationManager manage = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);
        noti.flags |= Notification.FLAG_AUTO_CANCEL;
        manage.notify(0,noti);
    }
}
