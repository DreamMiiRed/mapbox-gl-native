package com.mapbox.mapboxsdk.testapp.telemetry;

import android.os.Bundle;
import android.support.test.runner.AndroidJUnit4;

import com.mapbox.mapboxsdk.Mapbox;

import org.junit.Test;
import org.junit.runner.RunWith;

import java.text.SimpleDateFormat;
import java.util.Date;

@RunWith(AndroidJUnit4.class)
public class PerformanceEventTest {

    @Test
    public void triggerPerformanceEvent() {
      String now =
        new SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(new Date());
      Bundle bundle = new Bundle();
      bundle.putBoolean("test", true);
      bundle.putString("date", now);

      Mapbox.getTelemetry().onPerformanceEvent(bundle);
    }
}
