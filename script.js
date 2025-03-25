var todoInput = document.getElementById('todo-input');
var todoForm = document.getElementById('todo-form');
var todoList = document.getElementById('todo-list');
var doneList = document.getElementById('done-list');
console.log(3);
var todos = [];
var doneTasks = [];
var renderTasks = function () {
    // todoList와 doneList의 내용을 초기화
    todoList.innerHTML = '';
    doneList.innerHTML = '';
    // todos 배열을 순회하면서 할 일을 추가
    todos.forEach(function (todo) {
        var li = createTodoElement(todo, false);
        todoList.appendChild(li); // li를 todoList에 추가
    });
    // doneTasks 배열을 순회하면서 완료된 일을 추가
    doneTasks.forEach(function (todo) {
        var li = createTodoElement(todo, true);
        doneList.appendChild(li); // li를 doneList에 추가
    });
};
var getTodoText = function () {
    return todoInput.value.trim();
};
var addTodo = function (text) {
    todos.push({ id: Date.now(), text: text });
    todoInput.value = '';
    renderTasks();
};
var completeTodo = function (todo) {
    todos = todos.filter(function (t) { return t.id !== todo.id; }); // todo.id가 일치하는 항목만 제거
    doneTasks.push(todo);
    renderTasks();
};
var deleteTodo = function (todo) {
    doneTasks = doneTasks.filter(function (t) { return t.id !== todo.id; }); // 완료된 목록에서 해당 todo 제거
    renderTasks();
};
var createTodoElement = function (todo, isDone) {
    var li = document.createElement('li');
    li.classList.add('render-container__item');
    li.textContent = todo.text;
    var button = document.createElement('button');
    button.classList.add('render-container__item-button');
    if (isDone) {
        button.textContent = '삭제';
        button.style.backgroundColor = '#28a745';
    }
    else {
        button.textContent = '완료';
        button.style.backgroundColor = '#007bff';
    }
    button.addEventListener('click', function () {
        if (isDone) {
            deleteTodo(todo);
        }
        else {
            completeTodo(todo);
        }
    });
    li.appendChild(button);
    return li; // li 요소를 반환
};
todoForm.addEventListener('submit', function (event) {
    event.preventDefault();
    var text = getTodoText();
    if (text) {
        addTodo(text);
    }
});
renderTasks(); // 초기 렌더링
