const tabMenu1 = document.querySelector('.button1');
const tabMenu2 = document.querySelector('.button2');
const tabMenu3 = document.querySelector('.button3');
const buttGr = document.querySelector('.m_buttons');
const menu = document.querySelector('.menu');

if(tabMenu1 && tabMenu2 && tabMenu3){

    const tabBody1 = document.querySelector('.tab1');
    const tabBody2 = document.querySelector('.tab2');

    tabMenu1.addEventListener("click",function(e){
        if (tabBody1.classList.contains('closed')){
            buttGr.classList.remove('right');
            buttGr.classList.remove('right2');
            menu.classList.remove('margin');
            tabBody1.classList.remove('closed');
            tabBody2.classList.remove('up')
            tabBody1.classList.toggle('up');
            tabBody2.classList.toggle('closed');
        } 
    });

    tabMenu2.addEventListener("click",function(e){
        if (tabBody2.classList.contains('closed')){
            buttGr.classList.toggle('right');
            tabBody2.classList.remove('closed');
            tabBody1.classList.remove('up');
            tabBody2.classList.toggle('up');
            tabBody1.classList.toggle('closed');
            menu.classList.toggle('margin');
        } 
    });
    
    tabMenu3.addEventListener("click",function(e){
        buttGr.classList.remove('right');
        buttGr.classList.toggle('right2');
    });
}