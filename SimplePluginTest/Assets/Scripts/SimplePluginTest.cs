using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
public class SimplePluginTest : MonoBehaviour
{
 const string DLL_NAME = "SimplePlugin";
 [DllImport(DLL_NAME)]
 private static extern int SimpleFunction();
[DllImport(DLL_NAME)]
 private static extern int SimpleSave(float x, float y, float z);
[DllImport(DLL_NAME)]
 private static extern Vector3 SimpleLoad();

 [DllImport(DLL_NAME)]
 static extern void MarshallArraySave([In, Out] Vector3[] vecArray, int vecSize);

 //GameObject box;
 float px,py,pz;
List<Vector3> objects = new List<Vector3>();

 void start(){
 }

 void Update()
 {
 if (Input.GetKeyDown(KeyCode.C))
 {
    Debug.Log(SimpleFunction());
 }

 if (Input.GetKeyDown(KeyCode.DownArrow))
 {
      //px = box.transform.localPosition.x;
      //py = box.transform.localPosition.y;
      //pz = box.transform.localPosition.z;

      //SimpleSave(px,py,pz);
 }

 if (Input.GetKeyDown(KeyCode.UpArrow))
 {
   //Vector3 position = SimpleLoad();
   //box.transform.localPosition = position;
 }

  ///Remove from update and place in execute function.!--
 if (Input.GetKeyDown(KeyCode.O))
 {
    //Transform obj = GetComponent<Transform>();
    objects.Add(new Vector3(transform.localPosition.x,transform.localPosition.y,transform.localPosition.z));
    MarshallArraySave(objects.ToArray(), objects.Count);
 }
 }
}