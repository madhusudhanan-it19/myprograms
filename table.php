<?php

$servername="121.200.55.60:3307";

$username="2019UIT1114";

$password="2019UIT1114";

$dbname="2019UIT1114"; 
$conn = mysqli_connect($servername, $username, $password,$dbname);
if (!$conn) {
die("Connection failed: " . mysqli_connect_error());
}
echo "Connected successfully <br />";
$trunc="truncate table multiplication";
mysqli_query($conn,$trunc);
echo "table truncated <br />";
for($i=1;$i<=30;$i++)
{
$result=$i*5;
$sql="insert into multiplication(multiplicants,multiplier,result)values('$i',5,'$result')";
$res=mysqli_query($conn,$sql);
echo "sucess $i <br />";
}
?>


