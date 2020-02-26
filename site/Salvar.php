<?php
		include('Conexao.php');
		$sensor1 = $_GET['Sensor'];
		$sql = "INSERT INTO akvo (Sensor1) VALUES (:a)";
		$stmt = $PDO->prepare($sql);
		$stmt->bindParam(':a',$sensor1);
		

		if($stmt->execute()){
				echo "salvo_com_sucesso";
		} else{
				echo "Erro_ao_salvar";
		}

		
?>