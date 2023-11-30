pipeline {
	agent any

	stages {
    		stage('Start') {
        			steps {
            			echo 'Start of scripted pipeline'
        			}
    		}
    		stage('SCM') {
        			steps {
            		git 'https://github.com/albchi/MakefileForC.git'

     	   		}
    		}
    		stage('Compile') {
       		 	steps {
            			sh 'make compile'

        			}
    		}
    		stage('Test') {
        			steps {
            			sh 'PATH=./:$PATH; make test'

        			}
    		}
	}
}

